@interface AWEUITrackerImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)track:event:params:;
- (void)_track:event:params:;
- (BOOL)enable;
- (id)init;
- (void)async:;
- (void).cxx_destruct;
@end
