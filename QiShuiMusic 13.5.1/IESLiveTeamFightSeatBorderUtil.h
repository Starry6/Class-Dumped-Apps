@interface IESLiveTeamFightSeatBorderUtil : NSObject
+ (void)correctPointWithHorizontalLines:verticalLines:;
+ (id)createHorizontalLinesWithSeat:allSeats:;
+ (id)createLinesWithSeat:seatOStart:seatOEnd:seatODis:allSeats:allSeatsOStart:allSeatsOEnd:allSeatsODis:resultOLine:diff:;
+ (id)createLinesWithSimpleLine:adjacentLine:;
+ (id)createVerticalLinesWithSeat:allSeats:;
+ (id)drawBordersWithGuestSeats:;
+ (BOOL)isEqualWithA:andB:;
+ (BOOL)isEqualWithSeatsA:seatsB:;
+ (BOOL)isValue:betweenA:andB:;
+ (id)mergeHorizontalLines:;
+ (id)mergeVerticalLines:;
+ (id)simpleLineWithSeat:startOperator:endOperator:;
+ (id)simpleLinesWithSeats:startOperator:endOperator:;
+ (id)sortSeatsInfo:;
@end
