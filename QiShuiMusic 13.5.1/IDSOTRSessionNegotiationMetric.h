@interface IDSOTRSessionNegotiationMetric : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) Q priority;
@property (nonatomic) Q duration;
@property (nonatomic) I result;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)result;
- (id)service;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned long long)priority;
- (id)initWithService:priority:duration:result:;
@end
