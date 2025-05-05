@interface AnnieXCardViewService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncLoadViewWithNeedRender:cardModel:frame:layoutCompletion:;
- (id)createAnnieXCardWithFrame:cardModel:;
- (id)createViewContainerWithFrame:;
- (id)getAnnieXCardModelWithURL:;
- (id)getAnnieXCardModelWithURL:bid:;
- (id)getAnnieXCardModelWithURL:bid:queryItems:;
- (id)getAnnieXCardModelWithURL:bid:schemaClass:cardBuilder:;
- (id)getAnnieXCardModelWithURL:bid:schemaClass:queryItem:cardBuilder:;
- (id)getAnnieXCardViewContainerWithFrame:urlString:;
- (id)getAnnieXCardViewContainerWithFrame:urlString:bid:;
- (id)getAnnieXCardViewContainerWithFrame:urlString:bid:schemaClass:cardBuilder:;
- (id)getViewContainerWithFrame:urlString:context:;
- (void)p_appendWebURLWithCardModel:;
- (BOOL)p_matchedHostWhiteListWithUrl:allowList:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
@end
