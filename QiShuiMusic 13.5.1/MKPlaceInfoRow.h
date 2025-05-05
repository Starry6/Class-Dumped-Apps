@interface MKPlaceInfoRow : NSObject
@property (nonatomic) Q type;
@property (nonatomic) MKPlaceSectionRowView rowView;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL showIcon;
- (BOOL)enable;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setEnable:;
- (id)rowView;
- (BOOL)showIcon;
- (void)setShowIcon:;
+ (id)infoRow:ofType:;
@end
