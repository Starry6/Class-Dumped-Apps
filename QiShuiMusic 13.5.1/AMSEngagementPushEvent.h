@interface AMSEngagementPushEvent : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSArray actions;
@property (nonatomic) AMSEngagementRequest request;
- (void)setActions:;
- (id)data;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (id)actions;
- (void).cxx_destruct;
- (void)setData:;
- (void)setRequest:;
+ (BOOL)supportsSecureCoding;
+ (id)archiveClasses;
@end
