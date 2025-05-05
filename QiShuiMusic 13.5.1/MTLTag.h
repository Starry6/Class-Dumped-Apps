@interface MTLTag : NSObject
@property (nonatomic) Q tagType;
- (unsigned long long)tagType;
- (id)formattedDescription:;
- (id)initWithTagType:;
@end
