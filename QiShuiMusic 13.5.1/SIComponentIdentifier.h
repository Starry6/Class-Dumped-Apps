@interface SIComponentIdentifier : NSObject
@property (nonatomic) q hash;
- (id)init;
- (long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithName:uuid:;
- (id)initWithName:schemaUUID:;
@end
