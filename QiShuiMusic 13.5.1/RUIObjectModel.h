@interface RUIObjectModel : NSObject
@property (nonatomic) <RUIObjectModelDelegate> delegate;
@property (nonatomic) NSArray displayedPages;
@property (nonatomic) NSArray defaultPages;
@property (nonatomic) NSDictionary namedPages;
@property (nonatomic) NSArray allPages;
@property (nonatomic) RUIPage visiblePage;
@property (nonatomic) RUIElement activeElement;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSURL scriptURL;
@property (nonatomic) NSString inlineScript;
@property (nonatomic) NSString validationFunction;
@property (nonatomic) NSDictionary clientInfo;
@property (nonatomic) NSDictionary serverInfo;
@property (nonatomic) NSDictionary updateInfo;
@property (nonatomic) NSString idOfObjectModelToReplace;
@property (nonatomic) NSInteger refreshDelay;
@property (nonatomic) NSString refreshURL;
@property (nonatomic) q nextButtonStyle;
@property (nonatomic) RUIStyle style;
@property (nonatomic) RUIAlertView primaryAlert;
@property (nonatomic) NSString identifierMarkingStackRemovalAfterPush;
@property (nonatomic) NSArray pages;
@property (nonatomic) NSDictionary alert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alert;
- (void)setClientInfo:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)setSourceURL:;
- (BOOL)goBack;
- (id)clientInfo;
- (void)setAlert:;
- (void)setDelegate:;
- (id)sourceURL;
- (id)identifier;
- (void)setStyle:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setServerInfo:;
- (id)style;
- (void)setIdentifier:;
- (id)serverInfo;
- (BOOL)goBack:;
- (id)alertController;
- (id)_parentViewController;
- (void)setPages:;
- (id)pages;
- (id)absoluteURLWithString:;
- (id)primaryAlert;
- (id)allPages;
- (id)refreshURL;
- (void)setRefreshURL:;
- (void)startNavigationBarSpinnerWithTitle:;
- (void)setNextButtonStyle:;
- (void)stopNavigationBarSpinner;
- (id)_parentNavigationController;
- (id)defaultPages;
- (id)namedPages;
- (void)back:;
- (id)displayedPages;
- (BOOL)validateWithFunction:;
- (void)populatePostbackDictionary:;
- (id)postbackDictionary;
- (void)presentInParentViewController:animated:;
- (void)presentWithBlock:;
- (id)activeElement;
- (id)invokeScriptFunction:withArguments:;
- (id)visiblePage;
- (void)stopActivityIndicator;
- (id)subElementWithID:;
- (id)elementsWithName:;
- (id)validationFunction;
- (void)setValidationFunction:;
- (void)_navigateToNextPageAnimated;
- (void)refreshTimeout;
- (void)remoteUIWebViewController:dismissWithPayload:;
- (void)remoteUIWebViewControllerDidDismiss:;
- (BOOL)tableViewOM:deleteRowAtIndexPath:;
- (void)tableViewOMDidChange:;
- (void)tableViewOMSubmitForm:;
- (void)tableViewOM:elementDidChange:action:completion:;
- (void)passcodeViewOM:activatedElement:completion:;
- (void)RUIPage:pressedNavBarButton:;
- (void)RUIPage:toggledEditing:;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:;
- (void)alertView:pressedButton:completion:;
- (BOOL)webViewOM:shouldStartLoadWithRequest:navigationType:;
- (void)cleanupRefreshTimer;
- (void)parseDidFinish;
- (void)_populatePageNavItem:withNextButton:;
- (id)_firstPageForPresentation;
- (void)presentInParentViewController:animated:completion:;
- (void)presentPage:inViewController:animated:completion:;
- (id)newNavigationControllerForPresentation;
- (void)_displaySupplementalPage:;
- (void)_displayNamedPage:animated:;
- (void)pageDidDisappear:;
- (void)_navigateBackWithPop:fromViewController:;
- (void)didNavigateBackFromViewController:;
- (id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:;
- (id)postbackData;
- (void)_populateRequest:;
- (void)refreshWithObjectModel:;
- (void)_unsafe_setPages:;
- (void)addAlertElement:;
- (void)configureTableView:;
- (void)configureRow:;
- (void)configureSection:;
- (Class)customHeaderClassForSection:;
- (Class)customFooterClassForSection:;
- (Class)customTableCellClassForTableViewRow:;
- (id)tableHeaderViewForAttributes:;
- (id)tableFooterViewForAttributes:;
- (id)rowForFormField:;
- (id)relativeURLWithString:;
- (void)_startNavigationBarSpinnerIfNeededForAttributes:;
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:;
- (void)startActivityIndicator;
- (BOOL)hasAttributeOrAttributeFunctionNamed:withAttributes:;
- (id)stringForAttributeName:withAttributes:;
- (BOOL)hasConfirmationAttributes:;
- (BOOL)hasSecondConfirmationAttributes:;
- (void)presentConfirmationIfNeededForElement:completion:;
- (void)_presentConfirmationWithAttributes:completion:;
- (void)_presentSecondConfirmationWithAttributes:completion:;
- (id)textInRowWithIdentifier:;
- (void)handleAppleIDAuthenticationIfNeededForAttributes:completion:;
- (void)activateElement:completion:;
- (void)handleElementChange:action:completion:;
- (void)openLink:HTTPMethod:completion:;
- (BOOL)_shouldDisplayNamedElement:page:;
- (void)_handleLinkPress:attributes:completion:;
- (void)_handleElementChange:completion:;
- (id)_pageContainingTableView:;
- (void)showModalWebViewWithLinkURL:dismissButtonLabel:dismissButtonAlignment:scaleToFit:loadCompletion:dismissHandler:;
- (void)navigateToNextPageAnimated:;
- (id)scriptURL;
- (void)setScriptURL:;
- (id)inlineScript;
- (void)setInlineScript:;
- (id)updateInfo;
- (void)setUpdateInfo:;
- (id)idOfObjectModelToReplace;
- (void)setIdOfObjectModelToReplace:;
- (int)refreshDelay;
- (void)setRefreshDelay:;
- (long long)nextButtonStyle;
- (id)identifierMarkingStackRemovalAfterPush;
- (void)setIdentifierMarkingStackRemovalAfterPush:;
- (void)_logException:;
- (BOOL)prepareScriptContext;
- (id)objectForJSValue:;
- (void)runScript;
- (void)setJSGlobalContext:;
+ (void)_enableTestMode;
+ (id)objectModelForXMLNamed:;
@end
