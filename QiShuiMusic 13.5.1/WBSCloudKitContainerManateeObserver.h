@interface WBSCloudKitContainerManateeObserver : NSObject
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) @? stateChangeObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerIdentifier;
- (void)_determineManateeStateWithCompletion:;
- (id)stateChangeObserver;
- (void).cxx_destruct;
- (void)determineManateeStateWithCompletion:;
- (void)setStateChangeObserver:;
- (id)initWithContainerIdentifier:appleAccountInformationProvider:;
- (void)_accountChanged:;
@end
