@interface AWEUserEventTrackerLabelInfo : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString label;
@property (nonatomic) NSString value;
@property (nonatomic) NSString extra;
@property (nonatomic) NSDictionary attributes;
- (void)setExtra:;
- (id)extra;
- (void)setLabel:;
- (id)initWithBlock:;
- (id)label;
- (void)setAttributes:;
- (id)attributes;
- (void)setValue:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)value;
+ (id)instanceWithBlock:;
@end
