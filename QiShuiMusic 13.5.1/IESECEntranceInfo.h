@interface IESECEntranceInfo : NSObject
@property (nonatomic) IESECEntranceInfoScene entranceInfoScene;
@property (nonatomic) BOOL hasModified;
@property (nonatomic) IESECEntranceInfoChecker checker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)objValueForKey:;
- (void)setHasModified:;
- (id)entranceInfoDict;
- (id)entranceInfoScene;
- (id)entranceInfoString;
- (void)entrance_setValue:forKey:;
- (BOOL)hasModified;
- (id)initWithEntranceInfoScene:originDict:;
- (void)setChecker:;
- (void)setEntranceInfoScene:;
- (long long)integerValueForKey:;
- (id)stringValueForKey:;
- (void).cxx_destruct;
- (BOOL)boolValueForKey:;
- (id)numberValueForKey:;
- (id)checker;
@end
