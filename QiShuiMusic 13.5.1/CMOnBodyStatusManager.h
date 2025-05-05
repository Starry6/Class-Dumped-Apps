@interface CMOnBodyStatusManager : NSObject
- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)startOnBodyStatusDetectionPrivateToQueue:withParameters:handler:;
- (void)startOnBodyStatusDetectionToQueue:withParameters:handler:;
- (void)setPropertiesWithDictionary:;
- (void)connect;
- (void)stopOnBodyStatusDetection;
+ (id)sharedOnBodyStatusManager;
+ (BOOL)isOnBodyStatusDetectionAvailable;
@end
