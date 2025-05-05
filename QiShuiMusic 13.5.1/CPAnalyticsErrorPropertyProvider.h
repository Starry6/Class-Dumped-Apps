@interface CPAnalyticsErrorPropertyProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getDynamicProperty:forEventName:payloadForSystemPropertyExtraction:;
- (void)registerSystemProperties:;
+ (id)_indepthErrorFromError:;
@end
