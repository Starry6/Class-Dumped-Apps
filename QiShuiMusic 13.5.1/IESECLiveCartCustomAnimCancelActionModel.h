@interface IESECLiveCartCustomAnimCancelActionModel : MTLModel
@property (nonatomic) q actionType;
@property (nonatomic) BOOL isSingleRoom;
@property (nonatomic) q period;
@property (nonatomic) BOOL isNaturalTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isNaturalTime;
- (BOOL)isSingleRoom;
- (void)setIsNaturalTime:;
- (void)setIsSingleRoom:;
- (long long)actionType;
- (void)setActionType:;
- (long long)period;
- (void)setPeriod:;
+ (id)JSONKeyPathsByPropertyKey;
@end
