@interface BMSocialMediaHandle : NSObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString handle;
- (id)initWithProtoData:;
- (id)proto;
- (id)bundleId;
- (id)handle;
- (id)encodeAsProto;
- (id)initWithProto:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithBundleId:handle:;
@end
