@interface CTSweetgumPlansInfo : NSObject
@property (nonatomic) NSArray planGroups;
@property (nonatomic) NSString morePlansURL;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)planGroups;
- (void)setPlanGroups:;
- (id)morePlansURL;
- (void)setMorePlansURL:;
+ (BOOL)supportsSecureCoding;
@end
