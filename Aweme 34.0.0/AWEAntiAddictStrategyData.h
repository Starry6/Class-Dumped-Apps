@interface AWEAntiAddictStrategyData : MTLModel
@property (nonatomic) NSMutableDictionary privateData;
@property (nonatomic) NSString savedKey;
@property (nonatomic) BOOL disableSave;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPrivateData:;
- (BOOL)disableSave;
- (id)savedKey;
- (void)setDisableSave:;
- (id)getStrategyDataDic;
- (void)setSavedKey:;
- (id)init;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)privateData;
- (void)setObject:forKey:;
@end
