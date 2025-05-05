@interface IESECUserTrackerPageContext : NSObject
@property (nonatomic) NSString pageID;
@property (nonatomic) UIView container;
@property (nonatomic) BOOL canShowPendant;
@property (nonatomic) {UIEdgeInsets=dddd} pendantEdgeInsets;
@property (nonatomic) NSDictionary extraInfo;
- (BOOL)canShowPendant;
- (id)pendantEdgeInsets;
- (void)setCanShowPendant:;
- (void)setExtraInfo:;
- (void)setPendantEdgeInsets:;
- (void)setContainer:;
- (void)setPageID:;
- (id)container;
- (void).cxx_destruct;
- (id)pageID;
- (id)copyWithZone:;
- (id)extraInfo;
@end
