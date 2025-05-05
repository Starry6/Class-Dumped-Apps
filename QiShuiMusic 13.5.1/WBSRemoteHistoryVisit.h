@interface WBSRemoteHistoryVisit : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSDate date;
- (id)url;
- (id)init;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:date:;
+ (BOOL)supportsSecureCoding;
@end
