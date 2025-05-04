@interface AWEIMMangoShareOutShareActivityInfo : NSObject
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)initWithActivityType:activityID:schema:;
- (id)schema;
- (id)extra;
- (id)activityType;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)activityID;
@end
