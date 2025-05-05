@interface WFTTSString : NSObject
@property (nonatomic) NSArray components;
@property (nonatomic) NSString displayString;
- (id)components;
- (id)displayString;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithComponents:;
+ (id)parseAnnotatedString:;
@end
