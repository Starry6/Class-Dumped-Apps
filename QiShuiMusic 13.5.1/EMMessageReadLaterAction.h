@interface EMMessageReadLaterAction : EMMessageChangeAction
@property (nonatomic) NSDate readLaterDate;
- (long long)signpostType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithMessageListItems:readLaterDate:;
- (id)readLaterDate;
+ (BOOL)supportsSecureCoding;
@end
