@interface IESLiveSaaSLoadComponentParameter : NSObject
@property (nonatomic) @ model;
@property (nonatomic) IESLiveSaaSComponentContext entryContext;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveSaaSDI> roomDI;
- (id)roomDI;
- (void)setRoomDI:;
- (void)setTrackContext:;
- (id)trackContext;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
- (id)entryContext;
- (void)setEntryContext:;
@end
