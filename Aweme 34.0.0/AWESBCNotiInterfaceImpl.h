@interface AWESBCNotiInterfaceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sbcRegisterService:forBusinessType:;
- (void)sbcRegisterService:forBusinessTypes:;
- (void)sbcRegisterService:forKey:;
- (void)sbcRegisterService:forGroupToTypesDict:;
- (void)sbcPullWhenColdStart;
- (void)trackInnerPushEventWithAction:enterFrom:chatType:pushType:groupID:payload:extra:;
@end
