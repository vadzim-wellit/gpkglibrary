
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import "GeoPackageSingleton.h"

@interface RNGeoPackageLibrary : NSObject <RCTBridgeModule>

@end

