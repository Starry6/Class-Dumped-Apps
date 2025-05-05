@interface DOMOverflowEvent : DOMEvent
@property (nonatomic) S orient;
@property (nonatomic) BOOL horizontalOverflow;
@property (nonatomic) BOOL verticalOverflow;
- (unsigned short)orient;
- (BOOL)horizontalOverflow;
- (BOOL)verticalOverflow;
- (void)initOverflowEvent:horizontalOverflow:verticalOverflow:;
@end
