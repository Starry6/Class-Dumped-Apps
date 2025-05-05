@interface PPFeedbackItem : NSObject
@property (nonatomic) NSString itemString;
@property (nonatomic) I itemFeedbackType;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned int)itemFeedbackType;
- (BOOL)isEqualToPPFeedbackItem:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItemString:itemFeedbackType:;
- (id)itemString;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)stringForItemFeedbackType:;
@end
