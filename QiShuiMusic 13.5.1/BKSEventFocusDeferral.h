@interface BKSEventFocusDeferral : NSObject
@property (nonatomic) BKSEventFocusDeferralProperties properties;
@property (nonatomic) BKSEventFocusDeferralProperties deferredProperties;
@property (nonatomic) NSInteger priority;
@property (nonatomic) BOOL isCycle;
- (id)conciseDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (int)priority;
- (id)initWithProperties:deferredProperties:;
- (id)initWithProperties:deferredProperties:withPriority:;
- (BOOL)defersProperties:;
- (id)deferredPropertiesForProperties:;
- (BOOL)isCycle;
- (id)deferredProperties;
+ (BOOL)supportsSecureCoding;
@end
