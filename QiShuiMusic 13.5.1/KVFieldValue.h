@interface KVFieldValue : NSObject
@property (nonatomic) q fieldType;
@property (nonatomic) NSString value;
- (void).cxx_destruct;
- (long long)fieldType;
- (id)value;
- (id)initWithFieldType:value:;
@end
