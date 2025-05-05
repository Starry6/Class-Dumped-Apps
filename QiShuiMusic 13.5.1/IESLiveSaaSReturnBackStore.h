@interface IESLiveSaaSReturnBackStore : NSObject
@property (nonatomic) NSNumber roomID;
@property (nonatomic) Q path;
@property (nonatomic) Q type;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) <IESLiveSaaSTrackerSegue> segue;
@property (nonatomic) BOOL isFIFARoom;
@property (nonatomic) NSString backFIFARoomTitle;
- (id)backFIFARoomTitle;
- (BOOL)isFIFARoom;
- (id)segue;
- (void)setBackFIFARoomTitle:;
- (void)setEventContext:;
- (void)setIsFIFARoom:;
- (void)setSegue:;
- (unsigned long long)path;
- (void)setPath:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)eventContext;
- (id)room;
- (void)setRoom:;
- (id)roomID;
- (void)setRoomID:;
@end
