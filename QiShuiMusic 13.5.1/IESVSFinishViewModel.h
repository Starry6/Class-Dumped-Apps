@interface IESVSFinishViewModel : NSObject
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) NSString currentURL;
@property (nonatomic) @ mixroom;
@property (nonatomic) @? closeVCBlock;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) NSString finishUrl;
- (id)mixroom;
- (id)actualOwner;
- (id)closeVCBlock;
- (void)fetchRoomInfoWithComplete:;
- (id)finishUrl;
- (id)firstRequestPage;
- (BOOL)isDrawEnabled;
- (void)setCloseVCBlock:;
- (void)setFinishUrl:;
- (void)setMixroom:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)dealloc;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
- (id)currentURL;
- (void)setCurrentURL:;
@end
