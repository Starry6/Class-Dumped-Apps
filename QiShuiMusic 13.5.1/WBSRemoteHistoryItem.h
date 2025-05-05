@interface WBSRemoteHistoryItem : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSString title;
@property (nonatomic) NSDate lastVisitTime;
- (id)url;
- (id)init;
- (id)lastVisitTime;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:title:lastVisitTime:;
+ (BOOL)supportsSecureCoding;
@end
