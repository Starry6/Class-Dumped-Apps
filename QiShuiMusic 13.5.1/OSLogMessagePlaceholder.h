@interface OSLogMessagePlaceholder : NSObject
@property (nonatomic) NSString rawString;
@property (nonatomic) NSArray tokens;
@property (nonatomic) NSString typeNamespace;
@property (nonatomic) NSString type;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger precision;
- (void)dealloc;
- (int)precision;
- (id)rawString;
- (int)width;
- (id)type;
- (id)initWithPlaceholderStruct:;
- (id)typeNamespace;
- (id)tokens;
@end
