@interface ASCAppOfferSavedState : NSObject
@property (nonatomic) NSString state;
@property (nonatomic) ASCOfferMetadata metadata;
@property (nonatomic) q flags;
@property (nonatomic) BOOL isLoadingFullState;
@property (nonatomic) BOOL isActionable;
- (id)metadata;
- (id)state;
- (void).cxx_destruct;
- (long long)flags;
- (BOOL)isActionable;
- (id)initWithState:metadata:flags:;
- (BOOL)isLoadingFullState;
@end
