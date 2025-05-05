@interface DESMetadataSchema : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSInteger outputType;
@property (nonatomic) q buckets;
@property (nonatomic) NSString desc;
@property (nonatomic) <DESMetadataEncoder> encoder;
- (id)desc;
- (id)encoder;
- (id)key;
- (void).cxx_destruct;
- (long long)buckets;
- (int)outputType;
- (id)initWith:key:attachments:error:;
@end
