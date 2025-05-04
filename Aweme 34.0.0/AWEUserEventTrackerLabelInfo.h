@interface AWEUserEventTrackerLabelInfo : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString label;
@property (nonatomic) NSString value;
@property (nonatomic) NSString extra;
@property (nonatomic) NSDictionary attributes;
- (void)setExtra:;
- (id)value;
- (void)setLabel:;
- (id)attributes;
- (void)setEventName:;
- (id)initWithBlock:;
- (id)extra;
- (void)setValue:;
- (id)label;
- (void)setAttributes:;
- (void).cxx_destruct;
- (id)eventName;
+ (id)instanceWithBlock:;
@end
