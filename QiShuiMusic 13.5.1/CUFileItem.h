@interface CUFileItem : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q size;
@property (nonatomic) NSInteger type;
@property (nonatomic) I flags;
- (void)setName:;
- (id)initWithDictionary:error:;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (unsigned int)flags;
- (void)setSize:;
- (long long)size;
- (void)encodeWithDictionary:;
@end
