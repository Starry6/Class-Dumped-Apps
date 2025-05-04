@interface AWELongVideoPlusPlayInteractionNewElementDispatchManager : AWEPlayInteractionNewElementDispatchManager
@property (nonatomic) NSPointerArray nestedContainerList;
@property (nonatomic) NSPointerArray customElements;
- (BOOL)needUpdateElements;
- (void)_afterSetData;
- (void)customElements:;
- (id)customElements;
- (id)nestedContainerList;
- (void)setNestedContainerList:;
- (void)hidePlayInteractionTagsElement;
- (void)hidePlayInteractionAnchorElement;
- (void)hidePlayInteractionCoCreatorInfoElement;
- (void)hidePlayInteractionLongVideoPlusInfoWithCoverLeftNewElement;
- (void)setCustomElements:;
- (void).cxx_destruct;
@end
