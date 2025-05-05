@interface PGDisplayLink : NSObject
@property (nonatomic) @ owner;
@property (nonatomic) @? linkFired;
@property (nonatomic) Q preferredFramesPerSecond;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreferredFramesPerSecond:;
- (id)owner;
- (unsigned long long)preferredFramesPerSecond;
- (void).cxx_destruct;
- (void)invalidate;
- (id)linkFired;
- (void)_linkFired:;
- (id)initWithOwner:linkFired:;
@end
