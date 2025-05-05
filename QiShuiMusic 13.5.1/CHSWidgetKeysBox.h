@interface CHSWidgetKeysBox : NSObject
@property (nonatomic) NSArray widgetKeys;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithWidgetKeys:;
- (id)widgetKeys;
+ (BOOL)supportsSecureCoding;
@end
