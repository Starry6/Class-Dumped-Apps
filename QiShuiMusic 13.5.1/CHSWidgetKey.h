@interface CHSWidgetKey : NSObject
@property (nonatomic) CHSWidget widget;
@property (nonatomic) CHSWidgetMetrics metrics;
- (id)metrics;
- (id)widget;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWidget:metrics:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
