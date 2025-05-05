@interface CBAPEndpoint : NSObject
- (void)dealloc;
- (BOOL)setProperty:property:;
- (id)initWithServiceName:role:;
- (id)copyProperty:;
- (BOOL)sendCommand:inputBuffer:inputBufferSize:;
- (id)sendIMGCommand:outputBufferSize:;
- (BOOL)sendOOBCommand:inputBuffer:inputBufferSize:;
- (void)handleResponse:bufferSize:res:;
- (unsigned int)findDCPServiceWithName:role:;
@end
