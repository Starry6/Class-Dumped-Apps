@interface VKCAnalysisDebugMenuProvider : NSObject
@property (nonatomic) UIContextMenuInteraction contextMenuInteraction;
@property (nonatomic) <VKAnalysisDebugInfoProvider> provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProvider:;
- (void)setContextMenuInteraction:;
- (id)_contextMenuInteraction:styleForMenuWithConfiguration:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (id)provider;
- (id)contextMenuInteraction;
- (void).cxx_destruct;
- (void)contextMenuInteraction:willEndForConfiguration:animator:;
- (void)presentDebugMenuProvider:fromView:rect:;
- (id)menuFromProvider:;
- (id)menuFromElements:title:;
@end
