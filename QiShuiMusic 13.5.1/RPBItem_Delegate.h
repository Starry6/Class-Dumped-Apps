@interface RPBItem_Delegate : NSObject
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)getRemoteProcessingBlockParameterInfo:forScope:object:withError:;
- (void)getRemoteProcessingBlockParameter:forID:scope:element:object:withError:;
- (void)setRemoteProcessingBlockParameter:forID:scope:element:object:withError:;
- (void)getRemoteProcessingBlockPropertyInfo:forScope:object:withError:;
- (void)getRemoteProcessingBlockProperty:forID:scope:element:object:withError:;
- (void)setRemoteProcessingBlockProperty:forID:scope:element:object:withError:;
@end
