@interface AWEIMMangoShareOutShareInfo : NSObject
@property (nonatomic) NSString activityType;
@property (nonatomic) AWEIMMangoShareOutShareActivityInfo activityInfo;
@property (nonatomic) @? dynamicActivityInfoAction;
- (id)dynamicActivityInfoAction;
- (id)initWithActivityType:activityInfo:;
- (id)initWithActivityType:dynamicActivityInfoAction:;
- (id)activityType;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)activityInfo;
@end
