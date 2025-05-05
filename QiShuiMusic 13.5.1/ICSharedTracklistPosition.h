@interface ICSharedTracklistPosition : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString afterItemIdentifier;
- (long long)type;
- (void).cxx_destruct;
- (id)afterItemIdentifier;
+ (id)specifiedPositionAfterItemIdentifier:;
+ (id)playNextPositionWithAfterItemIdentifierHint:;
+ (id)playLastPositionWithAfterItemIdentifierHint:;
@end
