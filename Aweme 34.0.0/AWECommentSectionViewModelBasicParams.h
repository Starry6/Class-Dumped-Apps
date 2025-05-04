@interface AWECommentSectionViewModelBasicParams : NSObject
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString priorityTypeForBulletScreen;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSDictionary bizLogExtraDict;
@property (nonatomic) Q eventSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterMethod;
- (id)enterFrom;
- (id)bizLogExtraDict;
- (void)setBizLogExtraDict:;
- (id)priorityTypeForBulletScreen;
- (void)setPriorityTypeForBulletScreen:;
- (unsigned long long)eventSource;
- (void)setEventSource:;
- (void).cxx_destruct;
@end
