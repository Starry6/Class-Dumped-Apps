@interface AWEDeepLinkParamsManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)businessParamsInjection;
+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)addUGCustomKeyParams:;
+ (id)findActualOutPage:;
+ (BOOL)viewControllerNeedsExtraHandle:;
+ (id)getLastChild:;
+ (id)classesOnAnotherTransitionView;
+ (id)classesNeedsRecursivelyFindResponder;
+ (id)getViewOnAnotherTransitionView:;
+ (id)getNextVC:;
+ (id)getURLForContainer:;
@end
