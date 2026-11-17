MYAPP_VERSION = 1.0
MYAPP_SITE = $(TOPDIR)/package/myapp
MYAPP_SITE_METHOD = local

$(eval $(kernel-module))
$(eval $(generic-package))