@interface AWESearchMiddleCachalotContext : AWESearchCachalotContext
@property (nonatomic) NSDictionary lynxGlobalPropsParams;
@property (nonatomic) NSDictionary lynxRawDataParams;
@property (nonatomic) NSString containerId;
@property (nonatomic) NSArray methods;
@property (nonatomic) BOOL shouldUseAnnieX;
@property (nonatomic) BOOL enablePreUpdateData;
- (BOOL)shouldUseAnnieX;
- (BOOL)enablePreUpdateData;
- (void)setShouldUseAnnieX:;
- (void)setEnablePreUpdateData:;
- (id)lynxGlobalPropsParams;
- (void)setLynxGlobalPropsParams:;
- (id)lynxRawDataParams;
- (void)setLynxRawDataParams:;
- (id)containerId;
- (id)methods;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setContainerId:;
- (void)setMethods:;
@end
