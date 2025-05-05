@interface PKExtensionPointProxy : NSObject
@property (nonatomic) NSNumber platform;
@property (nonatomic) NSDictionary sdkEntry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)platform;
- (id)sdkEntry;
+ (id)extensionPointForIdentifier:platform:;
@end
