@interface CTCarrierSpacePlansInfo : NSObject
@property (nonatomic) NSArray planGroupsList;
@property (nonatomic) NSString morePlansURL;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)morePlansURL;
- (void)setMorePlansURL:;
- (id)planGroupsList;
- (void)setPlanGroupsList:;
+ (BOOL)supportsSecureCoding;
@end
