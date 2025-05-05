@interface CPAlertAction : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSString title;
@property (nonatomic) Q style;
@property (nonatomic) @? handler;
@property (nonatomic) UIColor color;
- (id)identifier;
- (id)initWithCoder:;
- (id)color;
- (void)encodeWithCoder:;
- (id)handler;
- (id)title;
- (void).cxx_destruct;
- (unsigned long long)style;
- (void)setIdentifier:;
- (id)initWithTitle:style:handler:;
- (id)initWithTitle:color:handler:;
+ (BOOL)supportsSecureCoding;
@end
