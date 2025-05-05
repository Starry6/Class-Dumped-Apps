@interface CUFileResponse : NSObject
@property (nonatomic) NSArray fileItems;
@property (nonatomic) I flags;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)description;
- (void)setFlags:;
- (unsigned int)flags;
- (void)encodeWithDictionary:;
- (id)fileItems;
- (void)setFileItems:;
@end
