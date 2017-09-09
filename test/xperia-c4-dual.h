struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 243,
		.content =
			"Processor\t: AArch64 Processor rev 2 (aarch64)\n"
			"processor\t: 0\n"
			"BogoMIPS\t: 26.00\n"
			"Features\t: fp asimd aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: AArch64\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xd03\n"
			"CPU revision\t: 2\n"
			"\n"
			"Hardware\t: MT6752\n",
	},
	{
		.path = "/system/build.prop",
		.size = 7780,
		.content =
			"##### Merging of the /util/data/semc_kernel_time_stamp.prop file #####\n"
			"ro.build.date=Sat Dec 12 13:47:11 CST 2015\n"
			"ro.build.date.utc=1449899231\n"
			"ro.build.user=BuildUser\n"
			"ro.build.host=BuildHost\n"
			"\n"
			"##### Final patch of properties #####\n"
			"ro.build.product=arima6752_65_s_l1\n"
			"\n"
			"################# Updating of the SW Version #################\n"
			"ro.semc.version.fs_revision=27.2.B.0.155\n"
			"ro.build.id=27.2.B.0.155\n"
			"ro.build.display.id=27.2.B.0.155\n"
			"\n"
			"##### Values from product package metadata #####\n"
			"ro.semc.product.model=E5333\n"
			"ro.semc.ms_type_id=PM-0862-BV\n"
			"ro.semc.version.fs=GENERIC\n"
			"ro.semc.product.name=Xperia C4 Dual\n"
			"ro.semc.product.device=E53\n"
			"ro.product.model=E5333\n"
			"\n"
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.version.incremental=1449899156\n"
			"ro.build.version.sdk=22\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=5.1\n"
			"ro.build.type=user\n"
			"ro.build.tags=test-keys\n"
			"ro.build.flavor=full_arima6752_65_s_l1-user\n"
			"ro.product.brand=alps\n"
			"ro.product.name=full_arima6752_65_s_l1\n"
			"ro.product.device=arima6752_65_s_l1\n"
			"ro.product.board=\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=arm64-v8a\n"
			"ro.product.cpu.abilist=arm64-v8a,armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=arm64-v8a\n"
			"ro.product.manufacturer=alps\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=mt6752\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=full_arima6752_65_s_l1-user 5.1 2.65.J.0.152_201512120913 1449899156 test-keys\n"
			"ro.build.fingerprint=alps/cosmos/cosmos:5.1/2.65.J.0.152_201512120913/1449899156:user/test-keys\n"
			"ro.build.characteristics=default\n"
			"ro.build.imeisv=09\n"
			"ro.build.vendor_sw_ver=2.65.J.0.152_201512120913\n"
			"ro.arima.product_type=cosmos_ds\n"
			"# end build properties\n"
			"ro.mtk_tc1_feature=1\n"
			"persist.radio.hd.voice=1\n"
			"#\n"
			"# from device/arima/arima6752_65_s_l1/system.prop\n"
			"#\n"
			"#\n"
			"# system.prop for generic sdk\n"
			"#\n"
			"\n"
			"rild.libpath=mtk-ril.so\n"
			"rild.libargs=-d /dev/ttyC0\n"
			"\n"
			"\n"
			"# MTK, Infinity, 20090720 {\n"
			"wifi.interface=wlan0\n"
			"# MTK, Infinity, 20090720 }\n"
			"\n"
			"# MTK, mtk03034, 20101210 {\n"
			"ro.mediatek.wlan.wsc=1\n"
			"# MTK, mtk03034 20101210}\n"
			"# MTK, mtk03034, 20110318 {\n"
			"ro.mediatek.wlan.p2p=1\n"
			"# MTK, mtk03034 20110318}\n"
			"\n"
			"# MTK, mtk03034, 20101213 {\n"
			"mediatek.wlan.ctia=0\n"
			"# MTK, mtk03034 20101213}\n"
			"\n"
			"\n"
			"#\n"
			"wifi.tethering.interface=ap0\n"
			"#\n"
			"\n"
			"ro.opengles.version=196608\n"
			"\n"
			"wifi.direct.interface=p2p0\n"
			"dalvik.vm.heapgrowthlimit=256m\n"
			"dalvik.vm.heapsize=512m\n"
			"\n"
			"# USB MTP WHQL\n"
			"ro.sys.usb.mtp.whql.enable=0\n"
			"\n"
			"# Power off opt in IPO\n"
			"sys.ipo.pwrdncap=2\n"
			"\n"
			"ro.sys.usb.storage.type=mtp,mass_storage\n"
			"\n"
			"#<2015/08/03 alreoryuan.To fix issue DMS06681036, add the default value for ro.product.locale.excluded.\n"
			"ro.product.locale.excluded=ar_EG ar_IL fa_IR iw_IL\n"
			"#>2015/08/03 alreoryuan.\n"
			"\n"
			"\n"
			"# USB BICR function\n"
			"ro.sys.usb.bicr=yes\n"
			"\n"
			"# USB Charge only function\n"
			"ro.sys.usb.charging.only=yes\n"
			"\n"
			"# audio\n"
			"ro.camera.sound.forced=0\n"
			"ro.audio.silent=0\n"
			"\n"
			"ro.zygote.preload.enable=0\n"
			"\n"
			"# temporary enables NAV bar (soft keys)\n"
			"qemu.hw.mainkeys=0\n"
			"\n"
			"ro.kernel.zio=38,108,105,16\n"
			"#ro.kernel.qemu=1\n"
			"#ro.kernel.qemu.gles=0\n"
			"#ro.boot.selinux=disable\n"
			"\n"
			"# Disable dirty region for Mali\n"
			"debug.hwui.render_dirty_regions=false\n"
			"\n"
			"ro.sf.lcd_density=480\n"
			"\n"
			"#System props for the MM modules\n"
			"encoder.video.profile=high\n"
			"\n"
			"sony.support.effect=0x1FF\n"
			"\n"
			"#//<2015/03/18-stevenchen, Modify default value of Image enhancement setting\n"
			"#//<2015/03/06-stevenchen, Implement video parameters for Image enhancement\n"
			"#//<2015/02/09-stevenchen, Integrate album parameters for Image enhancement\n"
			"ro.service.xrfm.supported=true\n"
			"persist.service.xrfm.mode=0\n"
			"persist.sys.pq.picmode=3\n"
			"persist.service.swiqi2.enable=0\n"
			"#//>2015/02/09-stevenchen\n"
			"#//>2015/03/06-stevenchen\n"
			"#//<2015/03/18-stevenchen\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.product-res-path=framework/SemcGenericUxpRes/SemcGenericUxpRes.apk\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.config.ringtone=xperia.ogg\n"
			"ro.config.notification_sound=notification.ogg\n"
			"ro.config.alarm_alert=alarm.ogg\n"
			"ro.carrier=unknown\n"
			"dalvik.vm.heapgrowthlimit=256m\n"
			"dalvik.vm.heapsize=512m\n"
			"ro.mediatek.chip_ver=S01\n"
			"ro.mediatek.version.release=ALPS.L1.MP2.TC9SP.V1_ARIMA6752.65.S.L1_P90\n"
			"ro.mediatek.platform=MT6752\n"
			"ro.telephony.sim.count=2\n"
			"persist.radio.default.sim=0\n"
			"persist.md.perm.checked=to_upgrade\n"
			"persist.gemini.sim_num=2\n"
			"persist.radio.multisim.config=dsds\n"
			"ro.gemini.smart_sim_switch=false\n"
			"ril.specific.sm_cause=1\n"
			"bgw.current3gband=0\n"
			"ril.external.md=0\n"
			"ro.mtk_cam_lomo_support=1\n"
			"ro.btstack=blueangel\n"
			"ro.sf.hwrotation=0\n"
			"ril.current.share_modem=2\n"
			"curlockscreen=1\n"
			"ro.mediatek.gemini_support=true\n"
			"persist.radio.fd.counter=15\n"
			"persist.radio.fd.off.counter=5\n"
			"persist.radio.fd.r8.counter=15\n"
			"persist.radio.fd.off.r8.counter=5\n"
			"drm.service.enabled=true\n"
			"fmradio.driver.enable=1\n"
			"ril.first.md=1\n"
			"ril.flightmode.poweroffMD=0\n"
			"ril.telephony.mode=0\n"
			"dalvik.vm.mtk-stack-trace-file=/data/anr/mtk_traces.txt\n"
			"mediatek.wlan.chip=CONSYS_MT6752\n"
			"mediatek.wlan.module.postfix=_consys_mt6752\n"
			"ril.radiooff.poweroffMD=0\n"
			"ro.mediatek.version.branch=L1.MP2.TC9SP\n"
			"ro.mediatek.version.sdk=4\n"
			"ro.setupwizard.mode=OPTIONAL\n"
			"ro.com.google.gmsversion=5.1_r2\n"
			"ro.com.google.clientidbase=android-sonyericsson\n"
			"ro.com.google.clientidbase.ms=android-sonymobile\n"
			"ro.mtk_gemini_support=1\n"
			"ro.mtk_audenh_support=1\n"
			"ro.mtk_lossless_bt_audio=1\n"
			"ro.mtk_besloudness_support=1\n"
			"ro.mtk_gemini_enhancement=1\n"
			"ro.mtk_wapi_support=1\n"
			"ro.mtk_bt_support=1\n"
			"ro.mtk_wappush_support=1\n"
			"ro.mtk_agps_app=1\n"
			"ro.mtk_voice_ui_support=1\n"
			"ro.mtk_voice_contact_support=1\n"
			"ro.mtk_matv_analog_support=1\n"
			"ro.mtk_wlan_support=1\n"
			"ro.mtk_gps_support=1\n"
			"ro.mtk_omacp_support=1\n"
			"ro.mtk_search_db_support=1\n"
			"ro.mtk_dialer_search_support=1\n"
			"ro.mtk_dhcpv6c_wifi=1\n"
			"ro.have_aacencode_feature=1\n"
			"ro.mtk_fd_support=1\n"
			"persist.data.cc33.support=1\n"
			"ro.mtk_eap_sim_aka=1\n"
			"ro.mtk_fm_recording_support=1\n"
			"ro.mtk_audio_ape_support=1\n"
			"ro.mtk_flv_playback_support=1\n"
			"ro.mtk_wmv_playback_support=1\n"
			"ro.mtk_send_rr_support=1\n"
			"ro.mtk_rat_wcdma_preferred=1\n"
			"ro.mtk_emmc_support=1\n"
			"ro.mtk_fm_50khz_support=1\n"
			"ro.mtk_tetheringipv6_support=1\n"
			"ro.mtk_phone_number_geo=1\n"
			"ro.mtk_shared_sdcard=1\n"
			"ro.mtk_enable_md1=1\n"
			"ro.mtk_pq_support=2\n"
			"ro.mtk_miravision_support=1\n"
			"ro.mtk_wfd_support=1\n"
			"ro.mtk_wfd_sink_support=1\n"
			"ro.mtk_wfd_sink_uibc_support=1\n"
			"ro.mtk_wifi_mcc_support=1\n"
			"ro.mtk_system_update_support=1\n"
			"ro.mtk_sim_hot_swap=1\n"
			"ro.mtk_thumbnail_play_support=1\n"
			"ro.mtk_bip_scws=1\n"
			"ro.mtk_cmcc_ft_precheck_support=1\n"
			"ro.mtk_world_phone_policy=0\n"
			"ro.mtk_perfservice_support=1\n"
			"ro.mtk_mobile_management=1\n"
			"ro.mtk_antibricking_level=2\n"
			"ro.mtk_cam_mfb_support=1\n"
			"ro.mtk_lte_support=1\n"
			"ro.mtk_cam_mav_support=1\n"
			"ro.mtk_cam_vfb=1\n"
			"ro.mtk_subtitle_support=1\n"
			"ro.mtk_live_photo_support=1\n"
			"ro.mtk_motion_track_support=1\n"
			"ro.mtk_slidevideo_support=1\n"
			"ro.mtk_hotknot_support=1\n"
			"ro.mtk_passpoint_r1_support=1\n"
			"ro.mtk_privacy_protection_lock=1\n"
			"ro.mtk_bg_power_saving_support=1\n"
			"ro.mtk_bg_power_saving_ui=1\n"
			"ro.have_aee_feature=1\n"
			"ro.sim_me_lock_mode=0\n"
			"ro.mtk_voice_extension_support=1\n"
			"wfd.dummy.enable=1\n"
			"ro.mediatek.project.path=device/arima/arima6752_65_s_l1\n"
			"ro.mtk_sony_hdcp_support=1\n"
			"ro.sdcrypt.supported=true\n"
			"ro.mtk_trustonic_tee_support=1\n"
			"ro.mtk_sec_video_path_support=1\n"
			"persist.mtk.wcn.combo.chipid=-1\n"
			"service.wcn.driver.ready=no\n"
			"ro.mtk_sensorhub_support=1\n"
			"ro.sony_app2sd_support=1\n"
			"ro.com.android.mobiledata=false\n"
			"persist.radio.mobile.data=0,0\n"
			"persist.meta.dumpdata=0\n"
			"ro.nfc.port=I2C\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm64.features=default\n"
			"dalvik.vm.isa.arm.features=default\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.drm.active.num=7\n"
			"ro.drm.active.0=marlin,1\n"
			"ro.drm.active.1=playready,1\n"
			"ro.drm.active.2=dtla,1\n"
			"ro.drm.active.3=marlin_import,1\n"
			"ro.drm.active.4=ckb,1\n"
			"ro.drm.active.5=widevine,1\n"
			"ro.drm.active.6=dcp,1\n"
			"ro.sony.fota.encrypteddata=supported\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "7\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1690000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "468000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{ NULL },
};
