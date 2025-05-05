@interface AVMetadataItemFilter : NSObject
@property (nonatomic) NSDictionary whitelist;
- (id)whitelist;
+ (id)metadataItemFilterForSharing;
@end
